//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDPCSData;

@interface CKDPCSMemoryCacheEntry : NSObject
{
    CKDPCSData *_pcsData;	// 8 = 0x8
    double _lastAccess;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007e29b
@property double lastAccess; // @synthesize lastAccess=_lastAccess;
@property(retain, nonatomic) CKDPCSData *pcsData; // @synthesize pcsData=_pcsData;
- (id)description;	// IMP=0x000000000007e258
- (id)CKPropertiesDescription;	// IMP=0x000000000007e106
- (id)init;	// IMP=0x000000000007e0b1

@end
