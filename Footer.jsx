const Footer = () => (
  <footer className="bg-dark text-white text-center py-1 fixed-bottom w-100">
    <style>
      {`
        .bg-dark { background-color: #343a40; }
        .text-white { color: white; }
        .text-center { text-align: center; }
        .py-1 { padding: 0.1rem 0; } /* Very small padding to reduce height */
        .fixed-bottom { position: fixed; bottom: 0; width: 100%; z-index: 1030; }
        .container { display: flex; flex-direction: column; align-items: center; }
        .container p { margin: 0.1rem 0; } /* Reduced margin */
        .container a { color: #c0c0c0; text-decoration: none; transition: color 0.2s; }
        .container a:hover { color: #ffffff; }
      `}
    </style>
    <div className="container">
      <p>© 2025 Your Company. All rights reserved.</p>
      <p>
        <a href="#" className="text-white">
          Privacy Policy
        </a>
        {" | "}
        <a href="#" className="text-white">
          Terms of Service
        </a>
      </p>
    </div>
  </footer>
);

export default Footer;
