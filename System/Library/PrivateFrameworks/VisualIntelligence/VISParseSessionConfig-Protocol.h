//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VisualIntelligence/NSObject-Protocol.h>

@class NSData, NSDictionary;

@protocol VISParseSessionConfig <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) _Bool use_vi_detector;
@property(nonatomic) _Bool enable_text_detection;
@property(nonatomic) _Bool enable_object_tracking;
@property(nonatomic) _Bool enable_object_detection;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end
