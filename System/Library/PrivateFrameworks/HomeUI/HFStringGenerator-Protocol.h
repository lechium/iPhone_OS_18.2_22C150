//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSCopying-Protocol.h>
#import <HomeUI/NSObject-Protocol.h>

@class NSAttributedString, NSDictionary;

@protocol HFStringGenerator <NSObject, NSCopying>
- (_Bool)prefersDynamicString;
- (NSAttributedString *)stringWithAttributes:(NSDictionary *)arg1;
- (NSAttributedString *)dynamicStringForSize:(struct CGSize)arg1 attributes:(NSDictionary *)arg2;
@end

