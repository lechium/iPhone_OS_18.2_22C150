//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, XCTDAccessibilitySystem;

@interface XCTDAccessibilitySessionToken : NSObject
{
    XCTDAccessibilitySystem *_accessibilitySystem;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000011c8e
@property(readonly) __weak XCTDAccessibilitySystem *accessibilitySystem; // @synthesize accessibilitySystem=_accessibilitySystem;
- (void)invalidate;	// IMP=0x0010000000011c2c
- (id)initWithAccessibilitySystem:(id)arg1;	// IMP=0x0010000000011bc9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
