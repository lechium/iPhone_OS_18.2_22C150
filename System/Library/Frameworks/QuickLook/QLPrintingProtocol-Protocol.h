//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol QLPrintingProtocol
- (void)provideCurrentPageAndVisibleRectWithCompletionHandler:(void (^)(unsigned long long, struct CGRect))arg1;
- (void)pdfDataForPageAtIndex:(long long)arg1 withCompletionHandler:(void (^)(NSData *))arg2;
- (void)prepareForDrawingPages:(struct _NSRange)arg1 ofSize:(struct CGSize)arg2;
- (void)numberOfPagesWithSize:(struct CGSize)arg1 completionHandler:(void (^)(long long))arg2;
@end
