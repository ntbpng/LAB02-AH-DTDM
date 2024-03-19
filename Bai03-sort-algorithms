from ._anvil_designer import HomeFormTemplate
from anvil import *
import anvil.server
import anvil.tables as tables
import anvil.tables.query as q
from anvil.tables import app_tables

#
# This is the Python code that makes this feedback form work.
# It's a Python class, with a method that runs when the user
# clicks the SUBMIT button.
#
# When the button is clicked, we send the contents of the
# text boxes to our Server Module. The Server Module records
# the feedback in the database, and sends an email to the
# app's owner (that's you!).
#
# To find the Server Module, look under "Server Code" on the
# left.
#

class HomeForm(HomeFormTemplate):

  def __init__(self, **properties):
    # Set Form properties and Data Bindings.
    self.init_components(**properties)

    # Any code you write here will run when the form opens.

  def btnIS_click(self, **event_args):
    """This method is called when the button is clicked"""
    numbers = split_numbers(self.txtSN.text)
    sorted_numbers = insertion_sort(numbers)
    self.txtKQ.text = ", ".join(str(x) for x in sorted_numbers)

  def btnSS_click(self, **event_args):
    """This method is called when the button is clicked"""
    numbers = split_numbers(self.txtSN.text)
    sorted_numbers = selection_sort(numbers)
    self.txtKQ.text = ", ".join(str(x) for x in sorted_numbers)

  def btnBS_click(self, **event_args):
    """This method is called when the button is clicked"""
    numbers = split_numbers(self.txtSN.text)
    sorted_numbers = bubble_sort(numbers)
    self.txtKQ.text = ", ".join(str(x) for x in sorted_numbers)

  def btnMS_click(self, **event_args):
    """This method is called when the button is clicked"""
    numbers = split_numbers(self.txtSN.text)
    sorted_numbers = merge_sort(numbers)
    self.txtKQ.text = ", ".join(str(x) for x in sorted_numbers)

  def txtKQ_change(self, **event_args):
    """This method is called when the text in this text area is edited"""
    pass

def split_numbers(text):
  """Splits the comma-separated text in the textbox into a list of numbers."""
  return [int(x) for x in text.split(",")]

def insertion_sort(numbers):
  """Insertion Sort algorithm."""
  for i in range(1, len(numbers)):
    key = numbers[i]
    j = i - 1
    while j >= 0 and numbers[j] > key:
      numbers[j + 1] = numbers[j]
      j -= 1
    numbers[j + 1] = key
  return numbers

def selection_sort(numbers):
  """Selection Sort algorithm."""
  for i in range(len(numbers)):
    min_index = i
    for j in range(i + 1, len(numbers)):
      if numbers[j] < numbers[min_index]:
        min_index = j
    numbers[i], numbers[min_index] = numbers[min_index], numbers[i]
  return numbers

def bubble_sort(numbers):
  """Bubble Sort algorithm."""
  swapped = True
  while swapped:
    swapped = False
    for i in range(len(numbers) - 1):
      if numbers[i] > numbers[i + 1]:
        numbers[i], numbers[i + 1] = numbers[i + 1], numbers[i]
        swapped = True
  return numbers

def merge_sort(numbers):
  """Merge Sort algorithm (recursive)."""
  if len(numbers) <= 1:
    return numbers
  mid = len(numbers) // 2
  left = merge_sort(numbers[:mid])
  right = merge_sort(numbers[mid:])
  return merge(left, right)

def merge(left, right):
  """Merges two sorted lists into a single sorted list."""
  merged = []
  i = 0
  j = 0
  while i < len(left) and j < len(right):
    if left[i] <= right[j]:
      merged.append(left[i])
      i += 1
    else:
      merged.append(right[j])
      j += 1
  merged += left[i:]
  merged += right[j:]
  return merged

  def clear_inputs(self):
    self.name_box.text = ""
    self.email_box.text = ""
    self.feedback_box.text = ""
