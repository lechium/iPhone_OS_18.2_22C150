//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputTestingKit/NSObject-Protocol.h>

@class TIAutocorrectionList, TICandidateRequestToken, TIKeyboardCandidateResultSet;

@protocol TIClientProxy <NSObject>
- (void)closeRequestToken:(TICandidateRequestToken *)arg1;
- (void)pushCandidateResultSet:(TIKeyboardCandidateResultSet *)arg1 requestToken:(TICandidateRequestToken *)arg2;
- (void)pushCandidates:(TIAutocorrectionList *)arg1 requestToken:(TICandidateRequestToken *)arg2;
@end

