//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DDScannerResult, NSArray, NSDictionary, NSError, NSString, RVQuery;

@protocol DDParsecServiceVCInterface
- (void)showClientQueryResults:(NSArray *)arg1 error:(NSError *)arg2;
- (void)appDidEnterBackground;
- (void)appWillEnterForeground;
- (void)setPopoverMode:(_Bool)arg1;
- (void)setSheetMode:(_Bool)arg1;
- (void)setPreviewMode:(_Bool)arg1;
- (void)setOriginalTitle:(NSString *)arg1;
- (void)startQueryWithResult:(DDScannerResult *)arg1 context:(NSDictionary *)arg2;
- (void)startQueryWithString:(NSString *)arg1 range:(struct _NSRange)arg2;
- (void)startQueryWithQuery:(RVQuery *)arg1;
- (void)prepareWithQueryObject:(RVQuery *)arg1 previewMode:(_Bool)arg2 sheetMode:(_Bool)arg3 popoverMode:(_Bool)arg4 viewStyle:(long long)arg5 scale:(double)arg6 dictionaryMode:(_Bool)arg7 remoteTextQuery:(_Bool)arg8;
@end

