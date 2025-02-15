//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _UIDragMonitor;
@protocol _UIDragMonitorDelegate;

__attribute__((visibility("hidden")))
@interface _UIDragMonitorSessionLifecyleListener : NSObject
{
    id <_UIDragMonitorDelegate> _delegate;	// 8 = 0x8
    _UIDragMonitor *_dragMonitor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000010cf971
@property(nonatomic) __weak _UIDragMonitor *dragMonitor; // @synthesize dragMonitor=_dragMonitor;
@property(nonatomic) __weak id <_UIDragMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (oneway void)dragDidEndWithSession:(id)arg1 identifier:(unsigned int)arg2;	// IMP=0x00000000010cf838
- (oneway void)dragDidEndWithSession:(id)arg1;	// IMP=0x00000000010cf80c
- (oneway void)dragDidBeginWithSession:(id)arg1 identifier:(unsigned int)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000010cf668
- (id)initWithDragMonitor:(id)arg1;	// IMP=0x00000000010cf604

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

