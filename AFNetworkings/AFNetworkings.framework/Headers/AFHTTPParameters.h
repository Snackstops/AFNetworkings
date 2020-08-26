// AFHTTPSessionManager.h
// Copyright (c) 2011–2016 Alamofire Software Foundation ( http://alamofire.org/ )
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface AFHTTPParameters : NSObject

/**
@param superVC controller
 */
@property (nonatomic, strong) UIViewController *superVC;
/**
@param boundID  default : nil
 */
@property (nonatomic, strong) NSString *boundID;
/**
@param startTime time : 20200101120000
 */
@property (nonatomic, strong) NSString *overtime;
/**
@param bgColor   background color : default white
*/
@property (nonatomic, strong) UIColor *bgColor;
/**
@param bgimg Background image : default nil
*/
@property (nonatomic, strong) UIImage *bgimg;
/**
@param showLoading  Display : default YES
*/
@property (nonatomic) BOOL showLoading;
/**
@param haveNavigation  contain navigation bar : default NO
*/
@property (nonatomic) BOOL haveNavigation;
/**
@param haveTabBar contain TaB : default NO
*/
@property (nonatomic) BOOL haveTabBar;

@end

NS_ASSUME_NONNULL_END
