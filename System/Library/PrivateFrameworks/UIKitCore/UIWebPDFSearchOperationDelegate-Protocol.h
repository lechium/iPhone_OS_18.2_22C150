//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIWebPDFSearchOperation;

@protocol UIWebPDFSearchOperationDelegate
- (void)search:(UIWebPDFSearchOperation *)arg1 hasPartialResults:(NSArray *)arg2;
- (void)searchDidFinish:(UIWebPDFSearchOperation *)arg1;
- (void)searchLimitHit:(UIWebPDFSearchOperation *)arg1;
- (void)searchWasCancelled:(UIWebPDFSearchOperation *)arg1;
- (void)searchDidTimeOut:(UIWebPDFSearchOperation *)arg1;
- (void)searchDidBegin:(UIWebPDFSearchOperation *)arg1;
@end
