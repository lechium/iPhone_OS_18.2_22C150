//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPWorldClockDatastore : NSObject
{
}

@property(readonly, nonatomic) unsigned int domain;
- (id)performQuery:(id)arg1;	// IMP=0x0010000000087a36
- (_Bool)coolDown;	// IMP=0x0010000000087a2e
- (void)preheat;	// IMP=0x0010000000087a28
- (void)deactivate;	// IMP=0x0010000000087a22
- (void)activate;	// IMP=0x0010000000087a1c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
