import { Link, useNavigate, Outlet } from "react-router-dom";
import "../Style.css";
import { useState } from "react";

const Nav = () => {
  const [searchInput, setSearchInput] = useState("");
  const navigate = useNavigate();

  const handleSearch = (e) => {
    e.preventDefault();
    switch (searchInput.toLowerCase()) {
      case "insert":
        navigate("/insert");
        break;
      case "display":
        navigate("/display");
        break;
      case "update":
        navigate("/update");
        break;
      case "search":
        navigate("/search");
        break;
      case "edit employee":
        navigate("/empedit/:id");
        break;
      case "home":
        navigate("/");
        break;
      case "about":
        navigate("/about");
        break;
      default:
        alert("Page not found");
    }
  };

  return (
    <>
      <nav
        className="navbar navbar-expand-lg navbar-dark bg-primary fixed-top"
        data-bs-theme="blue"
      >
        <div className="container-fluid">
          <Link style={{ fontSize: "40px" }} className="navbar-brand" to="/">
            Penny<span style={{ color: "black" }}>Pilot</span>
          </Link>
          <button
            className="navbar-toggler"
            type="button"
            data-bs-toggle="collapse"
            data-bs-target="#navbarSupportedContent"
            aria-controls="navbarSupportedContent"
            aria-expanded="false"
            aria-label="Toggle navigation"
          >
            <span className="navbar-toggler-icon"></span>
          </button>
          <div className="collapse navbar-collapse" id="navbarSupportedContent">
            <ul className="navbar-nav me-auto mb-2 mb-lg-0">
              <li className="nav-item">
                <Link className="nav-link active" aria-current="page" to="/">
                  Home
                </Link>
              </li>
              <li className="nav-item">
                <Link className="nav-link" to="/about">
                  About
                </Link>
              </li>
              <li className="nav-item">
                <Link className="nav-link" to="/insert">
                  Insert
                </Link>
              </li>
              <li className="nav-item">
                <Link className="nav-link" to="/display">
                  Display
                </Link>
              </li>
              <li className="nav-item">
                <Link className="nav-link" to="/update">
                  Update
                </Link>
              </li>
              <li className="nav-item">
                <Link className="nav-link" to="/search">
                  Search
                </Link>
              </li>
              <li className="nav-item">
                <Link className="nav-link" to="/empedit/:id">
                  Edit Employee
                </Link>
              </li>
            </ul>
            <form className="d-flex" role="search" onSubmit={handleSearch}>
              <input
                className="form-control me-2"
                type="search"
                placeholder="Search"
                aria-label="Search"
                value={searchInput}
                onChange={(e) => setSearchInput(e.target.value)}
              />
              <button
                style={{ backgroundColor: "black", color: "white" }}
                className="btn btn-outline-success"
                type="submit"
              >
                Search
              </button>
            </form>
          </div>
        </div>
      </nav>
      <Outlet />
    </>
  );
};

export default Nav;
