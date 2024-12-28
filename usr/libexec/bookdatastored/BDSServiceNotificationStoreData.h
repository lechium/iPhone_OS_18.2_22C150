//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface BDSServiceNotificationStoreData : NSObject
{
    NSArray *_notificationInfos;	// 8 = 0x8
    long long _changeToken;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000007a6cf
- (void).cxx_destruct;	// IMP=0x002000000007a956
@property long long changeToken; // @synthesize changeToken=_changeToken;
@property(retain, nonatomic) NSArray *notificationInfos; // @synthesize notificationInfos=_notificationInfos;
- (id)description;	// IMP=0x001000000007a874
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000007a774
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000007a6d7
- (id)initWithNotificationInfos:(id)arg1 changeToken:(long long)arg2;	// IMP=0x001000000007a658

@end
