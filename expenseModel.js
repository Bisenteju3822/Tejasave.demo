const mongoose = require("mongoose");

const expenseSchema = new mongoose.Schema({
  amount: Number,
  category: String,
  date: Date,
  description: String,
  paymentMethod: String,
  notes: String,
  account: String,
  merchant: String
});

module.exports = mongoose.model("Expense", expenseSchema);
