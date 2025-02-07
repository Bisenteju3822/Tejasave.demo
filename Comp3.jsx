import PropTypes from "prop-types";

const Comp3 = ({ name, surname, gender }) => {
  return (
    <>
      <h1>
        This is Second<span style={{ color: "green" }}>component</span>
      </h1>
      <h1>this is {name}</h1>
      <h1>this is {surname}</h1>
      <h1>this is {gender}</h1>
    </>
  );
};

Comp3.propTypes = {
  name: PropTypes.string.isRequired,
  surname: PropTypes.string.isRequired,
  gender: PropTypes.string.isRequired,
};

export default Comp3;
