import { useState } from "react";

const App = () => {
  const [name, setName] = useState("");
  const [email, setEmail] = useState("");
  const [password, setPassword] = useState("");
  const [error, setError] = useState({ name: "", email: "" });

  const handleChange = (event) => {
    const { name, value } = event.target;

    switch (name) {
      case "name":
        setName(value);
        setError((prevError) => ({
          ...prevError,
          name:
            value.length < 3 ? "Name must be at least 3 characters long" : "",
        }));
        break;

      case "email":
        setEmail(value);
        setError((prevError) => ({
          ...prevError,
          email: !/\S+@\S+\.\S+/.test(value) ? "Email is invalid" : "",
        }));
        break;

      case "password":
        setPassword(value);
        break;

      default:
        break;
    }

    console.log({ name, value, error });
  };

  const handleSubmit = (event) => {
    event.preventDefault();
    console.log({ name, email, password, error });
    // Your form submission logic here
    if (!error.name && !error.email) {
      alert("Form submitted successfully!");
    } else {
      alert("Please correct the errors before submitting.");
    }
  };

  return (
    <>
      <form
        style={{
          display: "flex",
          flexDirection: "column",
          justifyContent: "center",
          alignItems: "center",
          height: "100vh",
        }}
        onSubmit={handleSubmit}
      >
        <label htmlFor="name">Name:</label>
        <input
          type="text"
          placeholder="Name"
          name="name"
          value={name}
          onChange={handleChange}
        />
        {error.name && <p style={{ color: "red" }}>{error.name}</p>}

        <label htmlFor="email">Email:</label>
        <input
          type="text"
          placeholder="Email"
          name="email"
          value={email}
          onChange={handleChange}
        />
        {error.email && <p style={{ color: "red" }}>{error.email}</p>}

        <label htmlFor="password">Password:</label>
        <input
          type="password"
          placeholder="Password"
          name="password"
          value={password}
          onChange={handleChange}
        />

        <button type="submit">Submit</button>
      </form>
    </>
  );
};

export default App;
