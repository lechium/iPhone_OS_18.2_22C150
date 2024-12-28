//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class NSArray, PGManagerWorkingContext;

@protocol PGQuestionFactory <NSObject>
@property(readonly, nonatomic) unsigned short questionType;
@property(readonly, nonatomic) long long questionOptions;
- (NSArray *)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(void (^)(double, _Bool *))arg2;
- (id)init;
- (id)initWithWorkingContext:(PGManagerWorkingContext *)arg1 questionVersion:(short)arg2;
@end
