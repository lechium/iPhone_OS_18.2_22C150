//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI21LibrarySideBarManager : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *libraryOnly;	// 24 = 0x18
    MISSING_TYPE *libraryMenuDataSource;	// 32 = 0x20
    MISSING_TYPE *deviceMediaLibrary;	// 40 = 0x28
    MISSING_TYPE *initialFetchFinished;	// 48 = 0x30
    MISSING_TYPE *cachedLibraryCategoriesLoaded;	// 49 = 0x31
    MISSING_TYPE *stopped;	// 50 = 0x32
    MISSING_TYPE *$__lazy_storage_$_downloadItem;	// 56 = 0x38
    MISSING_TYPE *promptCategories;	// 64 = 0x40
    MISSING_TYPE *promptMenuItemTypes;	// 72 = 0x48
    MISSING_TYPE *$__lazy_storage_$_promptItems;	// 80 = 0x50
    MISSING_TYPE *menuDataSourceBarItems;	// 88 = 0x58
    MISSING_TYPE *visibleBarItems;	// 96 = 0x60
    MISSING_TYPE *forcedUpdate;	// 104 = 0x68
    MISSING_TYPE *genresController;	// 112 = 0x70
    MISSING_TYPE *libraryViewController;	// 120 = 0x78
    MISSING_TYPE *phoneRootViewHostingController;	// 128 = 0x80
    MISSING_TYPE *rebaseFromLibraryViewController;	// 136 = 0x88
    MISSING_TYPE *categoryForRebase;	// 144 = 0x90
    MISSING_TYPE *menuItemForRebase;	// 160 = 0xa0
    MISSING_TYPE *categorylessRebase;	// 168 = 0xa8
    MISSING_TYPE *sidebarItemsUpdateCancellable;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0000000000956b0f
- (void)dealloc;	// IMP=0x0000000000956af2
- (id)init;	// IMP=0x0000000000956a6e
- (void)dataSourceDidFinishFetching:(id)arg1;	// IMP=0x000000000095a938
- (void)isLibraryOnlyCountryChanged:(id)arg1;	// IMP=0x000000000095b44b
- (void)deviceMediaLibraryUpdateStateDidChange;	// IMP=0x000000000095b341
- (void)accountsChanged:(id)arg1;	// IMP=0x000000000095b133
- (void)networkReachabilityDidChange:(id)arg1;	// IMP=0x000000000095aef2

@end
