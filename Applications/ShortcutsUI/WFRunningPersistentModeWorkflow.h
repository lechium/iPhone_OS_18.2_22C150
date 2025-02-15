//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSProgress, WFDialogAttribution, WFWorkflowRunningContext;
@protocol WFBannerPresentable;

@interface WFRunningPersistentModeWorkflow : NSObject
{
    _Bool _completed;	// 8 = 0x8
    WFWorkflowRunningContext *_runningContext;	// 16 = 0x10
    id _progressSubscriber;	// 24 = 0x18
    WFDialogAttribution *_attribution;	// 32 = 0x20
    NSProgress *_progress;	// 40 = 0x28
    id <WFBannerPresentable> _associatedPill;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000001891c
@property(retain, nonatomic) id <WFBannerPresentable> associatedPill; // @synthesize associatedPill=_associatedPill;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(retain, nonatomic) WFDialogAttribution *attribution; // @synthesize attribution=_attribution;
@property(readonly, nonatomic) id progressSubscriber; // @synthesize progressSubscriber=_progressSubscriber;
@property(readonly, nonatomic) WFWorkflowRunningContext *runningContext; // @synthesize runningContext=_runningContext;
- (void)updateWithProgress:(id)arg1;	// IMP=0x001000000001880c
- (id)initWithRunningContext:(id)arg1 attribution:(id)arg2 progressSubscriber:(id)arg3;	// IMP=0x00100000000185cf

@end

