/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <UIKit/UIKit.h>

@interface RCTText : UIView

@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic, assign) NSLineBreakMode lineBreakMode;
@property (nonatomic, assign) NSUInteger numberOfLines;
@property (nonatomic, assign) UIEdgeInsets contentInset;

@end
