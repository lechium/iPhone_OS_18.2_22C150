//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTPronGuessResponse, NSObject;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMutablePronGuessStreamingResponse
{
}

+ (long long)content_typeForObject:(id)arg1;	// IMP=0x006000000018ebb8
+ (long long)content_typeForMutableObject:(id)arg1;	// IMP=0x006000000018eb5d
+ (Class)content_mutableClassForType:(long long)arg1;	// IMP=0x006000000018eb2f
@property(copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content; // @dynamic content;
@property(copy, nonatomic) FTPronGuessResponse *contentAsFTPronGuessResponse;
@property(nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000018e801
- (id)init;	// IMP=0x000000000018e773

@end

