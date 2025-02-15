//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpeechRecognitionCommandAndControl/NSObject-Protocol.h>

@protocol TUICandidateViewStyle;

@protocol TUICandidateViewState <NSObject>
@property(readonly, nonatomic) unsigned long long borders;
@property(readonly, nonatomic) struct CGPoint arrowButtonOffset;
@property(readonly, nonatomic) double additionalHeight;
@property(readonly, nonatomic) double yOffset;
@property(readonly, nonatomic) _Bool candidateNumberEnabled;
@property(readonly, nonatomic) _Bool hasBackdrop;
@property(readonly, nonatomic) long long arrowButtonDirection;
@property(readonly, nonatomic) long long arrowButtonPosition;
@property(readonly, nonatomic) long long inlineTextViewPosition;
@property(readonly, nonatomic) long long sortControlPosition;
@property(readonly, nonatomic) long long disambiguationGridPosition;
@property(readonly, nonatomic) long long disambiguationGridRowType;
@property(readonly, nonatomic) long long primaryGridRowType;
@property(readonly, nonatomic) id <TUICandidateViewStyle> disambiguationStyle;
@property(readonly, nonatomic) id <TUICandidateViewStyle> style;
@end

