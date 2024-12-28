//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TabDocumentActivity.h"

@class ActionPanel, UINavigationController;

__attribute__((visibility("hidden")))
@interface DownloadsActivity : TabDocumentActivity
{
    UINavigationController *_navigationController;	// 8 = 0x8
    ActionPanel *_parentViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001363f8
@property __weak ActionPanel *parentViewController; // @synthesize parentViewController=_parentViewController;
- (void)_downloadsDidChange;	// IMP=0x00000000001362ce
- (void)performActivityWithTabDocument:(id)arg1;	// IMP=0x0000000000136206
- (id)_embeddedActivityViewController;	// IMP=0x00000000001361f4
- (id)_navigationController;	// IMP=0x0000000000136138
- (_Bool)canPerformWithTabDocument:(id)arg1;	// IMP=0x00000000001360bf
- (_Bool)canPerformOnNewTabPage;	// IMP=0x00000000001360b7
- (long long)actionType;	// IMP=0x00000000001360ac
- (id)_activityBadgeColor;	// IMP=0x000000000013608c
- (id)_activityBadgeTextColor;	// IMP=0x0000000000136073
- (id)_activityBadgeText;	// IMP=0x0000000000135fc4
- (id)activityType;	// IMP=0x0000000000135fb0
- (id)_systemImageName;	// IMP=0x0000000000135fa3
- (id)activityTitle;	// IMP=0x0000000000135f84
- (id)init;	// IMP=0x0000000000135e94

@end
