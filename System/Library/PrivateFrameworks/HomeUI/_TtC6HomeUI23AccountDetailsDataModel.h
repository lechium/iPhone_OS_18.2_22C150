//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC6HomeUI23AccountDetailsDataModel : NSObject
{
    MISSING_TYPE *_contact;	// 0 = 0x0
    MISSING_TYPE *_didSubmitInfo;	// 0 = 0x0
    MISSING_TYPE *streetAddress1;	// 0 = 0x0
    MISSING_TYPE *streetAddress2;	// 8028436 = 0x7a8114
    MISSING_TYPE *streetAddress3;	// 17420 = 0x440c
    MISSING_TYPE *city;	// 8028436 = 0x7a8114
    MISSING_TYPE *state;	// 0 = 0x0
    MISSING_TYPE *country;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *zipCode;	// 1701406303 = 0x6569665f
}

- (void).cxx_destruct;	// IMP=0x0000000000200460
- (id)init;	// IMP=0x0000000000200400
- (void)deserializeWithResults:(id)arg1;	// IMP=0x0000000000200350
- (id)getInfoWithTafFieldKey:(id)arg1;	// IMP=0x00000000002002d0
@property(nonatomic, readonly) NSString *phoneNumberServer;
- (id)initWithMeContact:(id)arg1;	// IMP=0x00000000001fe5f0

@end

