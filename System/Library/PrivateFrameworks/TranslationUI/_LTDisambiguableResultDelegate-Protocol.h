//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TranslationUI/NSObject-Protocol.h>

@class NSSet, _LTDisambiguableResult, _LTDisambiguableSentence, _LTDisambiguationUserSelection;

@protocol _LTDisambiguableResultDelegate <NSObject>

@optional
- (NSSet *)excludedTypesForResult:(_LTDisambiguableResult *)arg1;
- (void)disambiguableResult:(_LTDisambiguableResult *)arg1 didChangeResultForSentence:(_LTDisambiguableSentence *)arg2 withSelection:(_LTDisambiguationUserSelection *)arg3;
@end

