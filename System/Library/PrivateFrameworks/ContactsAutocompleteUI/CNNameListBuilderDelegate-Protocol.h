//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsAutocompleteUI/NSObject-Protocol.h>

@class CNNameListBuilder, NSString;

@protocol CNNameListBuilderDelegate <NSObject>
- (_Bool)builder:(CNNameListBuilder *)arg1 isValidLengthOfString:(NSString *)arg2;
- (NSString *)builder:(CNNameListBuilder *)arg1 nameAtIndex:(long long)arg2;
- (long long)countOfNamesForBuilder:(CNNameListBuilder *)arg1;
@end
