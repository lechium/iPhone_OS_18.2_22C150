//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKFirstBootDetector;

@interface BKBootUIOverlayVendor : NSObject
{
    BKFirstBootDetector *_firstBootDetector;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000000a2b3b
- (void).cxx_destruct;	// IMP=0x00200000000a2b2b
- (id)currentOverlayWithLevel:(float)arg1;	// IMP=0x00100000000a294e
- (id)initWithFirstBootDetector:(id)arg1;	// IMP=0x00100000000a28e3

@end

