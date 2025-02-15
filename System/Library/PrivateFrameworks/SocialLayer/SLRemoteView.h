//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class NSObject, SLDServiceProxy, UISSlotStyle, _UISlotView;
@protocol OS_dispatch_queue, UISSlotAnyContent;

__attribute__((visibility("hidden")))
@interface SLRemoteView : UIControl
{
    _Bool _remoteContentIsLoaded;	// 8 = 0x8
    _Bool _remoteRenderingEnabled;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_remoteRenderingQueue;	// 16 = 0x10
    double _maxWidth;	// 24 = 0x18
    id <UISSlotAnyContent> _placeholderSlotContent;	// 32 = 0x20
    UISSlotStyle *_lastRenderedSlotStyle;	// 40 = 0x28
    SLDServiceProxy *_serviceProxy;	// 48 = 0x30
    _UISlotView *_slotView;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000002a7fb
@property(readonly, nonatomic) _UISlotView *slotView; // @synthesize slotView=_slotView;
@property(readonly, nonatomic) SLDServiceProxy *serviceProxy; // @synthesize serviceProxy=_serviceProxy;
@property(retain, nonatomic) UISSlotStyle *lastRenderedSlotStyle; // @synthesize lastRenderedSlotStyle=_lastRenderedSlotStyle;
@property(retain, nonatomic) id <UISSlotAnyContent> placeholderSlotContent; // @synthesize placeholderSlotContent=_placeholderSlotContent;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *remoteRenderingQueue; // @synthesize remoteRenderingQueue=_remoteRenderingQueue;
@property(nonatomic) _Bool remoteRenderingEnabled; // @synthesize remoteRenderingEnabled=_remoteRenderingEnabled;
@property(nonatomic) _Bool remoteContentIsLoaded; // @synthesize remoteContentIsLoaded=_remoteContentIsLoaded;
- (void)serviceProxyDidDisconnect:(id)arg1;	// IMP=0x000000000002a71a
- (void)serviceProxyDidConnect:(id)arg1;	// IMP=0x000000000002a68e
- (void)remoteContentIsLoadedValueChanged;	// IMP=0x000000000002a688
- (void)_provideContentForLayerContextID:(unsigned long long)arg1 style:(id)arg2 yield:(CDUnknownBlockType)arg3;	// IMP=0x000000000002a2bc
- (CDUnknownBlockType)_contentProviderForCurrentConfiguration;	// IMP=0x000000000002a1b8
- (id)_finalSlotStyleForStyle:(id)arg1;	// IMP=0x000000000002a1a2
- (void)renderRemoteContentForLayerContextID:(unsigned long long)arg1 style:(id)arg2 yield:(CDUnknownBlockType)arg3;	// IMP=0x000000000002a19c
- (id)makePlaceholderSlotContentForStyle:(id)arg1;	// IMP=0x000000000002a194
- (_Bool)shouldInvalidatePreviousPlaceHolderSlotContent:(id)arg1 forStyle:(id)arg2;	// IMP=0x000000000002a18c
- (id)initWithServiceProxyClass:(Class)arg1 maxWidth:(double)arg2;	// IMP=0x00000000000299b7

@end

