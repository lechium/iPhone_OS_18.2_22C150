//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPDefaultSearchDatastore : NSObject
{
}

- (id)feedbackListeners;	// IMP=0x0020000000078878
@property(readonly, nonatomic) unsigned int domain;
- (id)performQuery:(id)arg1;	// IMP=0x0010000000078865
- (void)deactivate;	// IMP=0x001000000007885f
- (void)activate;	// IMP=0x0010000000078859

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

