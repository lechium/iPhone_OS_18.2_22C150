//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI33SportsFavoritesTemplateController
{
    MISSING_TYPE *templateUpdateObserver;	// 1818391919 = 0x6c62756f
    MISSING_TYPE *teamsServiceRequest;	// 1074544839 = 0x400c40c7
    MISSING_TYPE *teamsServiceRequestCancellable;	// 1032669198 = 0x3d8d480e
    MISSING_TYPE *favoriteTeamsBefore;	// 3238890824 = 0xc10d8d48
}

- (void).cxx_destruct;	// IMP=0x0000000000897a6e
- (void)vuiCollectionView:(id)arg1 willDisplay:(id)arg2 for:(id)arg3;	// IMP=0x0000000000897862
- (void)vuiCollectionView:(id)arg1 didSelectItemAt:(id)arg2;	// IMP=0x000000000089751a
- (void)vui_viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000896e91
- (void)vui_viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000896d6a
- (void)vui_viewDidLoad;	// IMP=0x00000000008969c7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000008968b4
- (void)onFavoritesCacheUpdated:(id)arg1;	// IMP=0x00000000008981f7
- (void)onAuthenticationDidChange:(id)arg1;	// IMP=0x0000000000898114

@end
