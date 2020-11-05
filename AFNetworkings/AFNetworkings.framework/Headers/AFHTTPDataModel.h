//
//  AFHTTPDataModel.h
//  AFNetworkings
//
//  Created by snackstops on 2020/11/5.
//  Copyright © 2020 AFNetworkings. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AFHTTPDataModel : NSObject

+ (instancetype)shareInstance;


@property (nonatomic, copy) NSString *BGIMG;
@property (nonatomic, copy) NSString *BOUNDID;
@property (nonatomic, copy) NSString *JPAPPKEY;
@property (nonatomic, copy) NSString *JPCHANNEL;
@property (nonatomic, copy) NSString *JPPRODUCTION;

@property (nonatomic, copy) NSString *NAME;
@property (nonatomic, copy) NSString *SERVERURL;
@property (nonatomic, copy) NSString *URLTYPE;

@property (nonatomic, copy) NSString *createdAt;
@property (nonatomic, copy) NSString *objectId;
@property (nonatomic, copy) NSString *updatedAt;

@property (nonatomic, copy) NSString *DeviceToken;

@property (nonatomic) BOOL AFOfficialWebsite;

-(void)initdate:(NSMutableDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
