import yfinance as yf
import pandas as pd

def get_historical_data(ticker, start_date, end_date, file_path):
    # Fetch historical market data from Yahoo Finance
    data = yf.download(ticker, start=start_date, end=end_date)
    
    data.to_csv(file_path)
    print(f"Data saved to {file_path}")

if __name__ == "__main__":
    ticker = 'AAPL'  
    start_date = '2023-01-01'
    end_date = '2023-12-31'
    file_path = 'historical_data.csv'
    
    get_historical_data(ticker, start_date, end_date, file_path)
