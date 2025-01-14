//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSApplication.h>

@class SUUIApplicationController;

__attribute__((visibility("hidden")))
@interface SUUIJSApplication : IKJSApplication
{
    SUUIApplicationController *_applicationController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002cc13c
@property(readonly, nonatomic) __weak SUUIApplicationController *applicationController; // @synthesize applicationController=_applicationController;
@property(readonly) _Bool isRunningTests;
- (void)sendDocumentMessage:(id)arg1:(id)arg2:(id)arg3;	// IMP=0x00000000002cbe34
- (void)launchComplete:(id)arg1;	// IMP=0x00000000002cbdc1
- (void)launchFailed;	// IMP=0x00000000002cbd78
@property(readonly, nonatomic) _Bool pageRenderMetricsEnabled;
- (id)initWithAppContext:(id)arg1 applicationController:(id)arg2;	// IMP=0x00000000002cbbff

@end

