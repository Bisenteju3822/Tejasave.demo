import PropTypes from "prop-types";
import Comp1 from "./Comp1";
import Comp2 from "./Comp2";
import Comp3 from "./Comp3";

const App = ({ name = "teju", surname = "bisen", gender = "male" }) => {
  return (
    <>
      <Comp1 name={name} surname={surname} gender={gender} />
      <Comp2 name={name} surname={surname} gender={gender} />
      <Comp3 name={name} surname={surname} gender={gender} />
    </>
  );
};

App.propTypes = {
  name: PropTypes.string.isRequired,
  surname: PropTypes.string.isRequired,
  gender: PropTypes.string.isRequired,
};

export default App;
