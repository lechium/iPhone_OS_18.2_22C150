//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapItem, NSString;

@interface RAPSearchAutocompleteResult : NSObject
{
    NSString *_searchBarText;	// 8 = 0x8
    MKMapItem *_selectedMapItem;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000b2432a
@property(retain, nonatomic) MKMapItem *selectedMapItem; // @synthesize selectedMapItem=_selectedMapItem;
@property(copy, nonatomic) NSString *searchBarText; // @synthesize searchBarText=_searchBarText;

@end
