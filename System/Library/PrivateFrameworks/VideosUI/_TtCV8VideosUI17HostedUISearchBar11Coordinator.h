//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtCV8VideosUI17HostedUISearchBar11Coordinator : NSObject
{
    MISSING_TYPE *_text;	// 8 = 0x8
    MISSING_TYPE *_isSearching;	// 40 = 0x28
    MISSING_TYPE *_searchButtonClicked;	// 64 = 0x40
    MISSING_TYPE *_textInputSource;	// 88 = 0x58
    MISSING_TYPE *recordMetricsForSubmit;	// 120 = 0x78
    MISSING_TYPE *recordMetricsForCancel;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000904101
- (id)init;	// IMP=0x00000000009040ce
- (_Bool)textFieldShouldClear:(id)arg1;	// IMP=0x000000000090403a
- (void)searchBarCancelButtonClicked:(id)arg1;	// IMP=0x0000000000903fc7
- (void)searchBarSearchButtonClicked:(id)arg1;	// IMP=0x0000000000903f2f
- (void)searchBarTextDidEndEditing:(id)arg1;	// IMP=0x0000000000903e54
- (void)searchBarTextDidBeginEditing:(id)arg1;	// IMP=0x0000000000903dee
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x0000000000903d5b

@end

