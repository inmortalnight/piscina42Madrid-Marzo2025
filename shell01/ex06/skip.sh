#!/bin/bash

ls -l | awk 'NF%2==1'
