import { Routes, Route, useLocation } from "react-router-dom";
import Nav from "./Component/Navbar";
import Footer from "./Component/Footer";
import Home from "./assets/Pages/Home";
import About from "./assets/Pages/About";
import Display from "./assets/Pages/Display";
import Insert from "./assets/Pages/Insert";
import Update from "./assets/Pages/Update";
import Search from "./assets/Pages/Search"; // Fixed import path
import EmpEdit from "./assets/Pages/EmpEdit";

const App = () => {
  const location = useLocation();

  // Define routes that should not have Nav and Footer
  const noNavFooterRoutes = [
    "/update",
    "/display",
    "/insert",
    "/search",
    "/empedit/:id",
  ];

  // Determine whether to show Nav and Footer based on the current route
  const shouldShowNavFooter = !noNavFooterRoutes.includes(location.pathname);

  return (
    <>
      {shouldShowNavFooter && <Nav />}

      <main>
        <Routes>
          <Route path="/" element={<Home />} />
          <Route path="about" element={<About />} />
          <Route path="display" element={<Display />} />
          <Route path="insert" element={<Insert />} />
          <Route path="update" element={<Update />} />
          <Route path="search" element={<Search />} />
          <Route path="empedit/:id" element={<EmpEdit />} />
        </Routes>
      </main>

      {shouldShowNavFooter && <Footer />}
    </>
  );
};

export default App;
