//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDSFoundation/NSObject-Protocol.h>

@class NSData, NSString;

@protocol IDSCTPNRResponseData <NSObject>
@property(readonly, nonatomic) NSString *status;
@property(readonly, nonatomic) _Bool success;
@property(readonly, nonatomic) NSData *signature;
@property(readonly, nonatomic) NSString *phoneBookNumber;
@property(readonly, nonatomic) NSString *phoneNumber;
@end
