//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOSearchAttributionListener : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSMutableArray *_completionHandlers;	// 16 = 0x10
    NSMutableArray *_errorHandlers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000011ea07b
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)handleError:(id)arg1;	// IMP=0x00000000011e9f49
- (void)handleInfo:(id)arg1;	// IMP=0x00000000011e9e21
- (void)addCompletionHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000011e9ceb
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000011e9c61

@end

