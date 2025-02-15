//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, SUUIClientContext;
@protocol SUUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate;

__attribute__((visibility("hidden")))
@interface SUUISuggestedHandlesSettingsHeaderFooterDescription
{
    SUUIClientContext *_clientContext;	// 8 = 0x8
    NSArray *_suggestedHandles;	// 16 = 0x10
    id <SUUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000037004d
@property(nonatomic) __weak id <SUUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate> delegate; // @synthesize delegate=_delegate;
- (Class)_viewClassForSettingsHeaderFooterDescription:(id)arg1;	// IMP=0x000000000037000f
- (id)suggestedHandles;	// IMP=0x000000000036ffea
- (void)selectedHandleAtIndex:(unsigned long long)arg1;	// IMP=0x000000000036ff1e
- (id)helpText;	// IMP=0x000000000036fe5e
- (id)initWithSuggestedHandles:(id)arg1 clientContext:(id)arg2 delegate:(id)arg3;	// IMP=0x000000000036fd97

@end

