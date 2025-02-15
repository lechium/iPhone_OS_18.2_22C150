//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol WBSTranslationContentExtracting;

@protocol WBSTranslationContentExtractionDelegate <NSObject>

@optional
- (NSString *)sourceLocaleForContentExtractor:(id <WBSTranslationContentExtracting>)arg1;
- (NSString *)targetLocaleForContentExtractor:(id <WBSTranslationContentExtracting>)arg1;
- (void)contentExtractorDidFinishExtractingInitialContent:(id <WBSTranslationContentExtracting>)arg1;
- (void)contentExtractorDidStopExtractingContent:(id <WBSTranslationContentExtracting>)arg1;
- (void)contentExtractorDidBeginExtractingContent:(id <WBSTranslationContentExtracting>)arg1;
- (void)contentExtractor:(id <WBSTranslationContentExtracting>)arg1 didExtractContent:(NSArray *)arg2;
@end

