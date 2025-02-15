//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SYShowBacklinkIndicatorCommandImpl;

__attribute__((visibility("hidden")))
@interface SYShowBacklinkIndicatorCommand : NSObject
{
    id <SYShowBacklinkIndicatorCommandImpl> __impl;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003a1a8
@property(retain, nonatomic) id <SYShowBacklinkIndicatorCommandImpl> _impl; // @synthesize _impl=__impl;
- (void)invalidate;	// IMP=0x000000000003a150
- (void)runWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000003a0e7
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (id)initWithDomainIdentifiers:(id)arg1 linkIdentifiers:(id)arg2;	// IMP=0x0000000000039fe7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

