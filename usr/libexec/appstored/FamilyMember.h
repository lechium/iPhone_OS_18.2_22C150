//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface FamilyMember : NSObject
{
    _Bool _currentSignedInUser;	// 8 = 0x8
    _Bool _askToBuyEnabled;	// 9 = 0x9
    _Bool _sharingPurchases;	// 10 = 0xa
    NSString *_firstName;	// 16 = 0x10
    NSNumber *_iCloudDSID;	// 24 = 0x18
    NSString *_iCloudUsername;	// 32 = 0x20
    NSNumber *_iTunesDSID;	// 40 = 0x28
    NSString *_iTunesUsername;	// 48 = 0x30
    NSString *_lastName;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000142300
- (id)description;	// IMP=0x0010000000142055

@end
