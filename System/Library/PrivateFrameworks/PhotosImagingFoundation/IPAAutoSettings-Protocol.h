//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosImagingFoundation/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol IPAAutoSettings <NSObject>
@property(readonly, nonatomic) _Bool pending;
@property(readonly, nonatomic) NSString *identifier;
- (NSDictionary *)archiveDictionary;
- (_Bool)applyArchiveDictionary:(NSDictionary *)arg1;
@end
