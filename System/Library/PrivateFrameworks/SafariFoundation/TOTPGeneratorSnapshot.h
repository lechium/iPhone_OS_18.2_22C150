//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, SFAutoFillOneTimeCode;

__attribute__((visibility("hidden")))
@interface TOTPGeneratorSnapshot : NSObject
{
    NSDate *_startDateOfInterval;	// 8 = 0x8
    SFAutoFillOneTimeCode *_oneTimeCode;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000001f86
@property(retain, nonatomic) SFAutoFillOneTimeCode *oneTimeCode; // @synthesize oneTimeCode=_oneTimeCode;
@property(retain, nonatomic) NSDate *startDateOfInterval; // @synthesize startDateOfInterval=_startDateOfInterval;

@end
