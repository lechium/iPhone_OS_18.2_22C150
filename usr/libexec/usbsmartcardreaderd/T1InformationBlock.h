//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface T1InformationBlock
{
}

+ (id)informationBlockWithNad:(unsigned char)arg1 sequence:(BOOL)arg2 moreData:(_Bool)arg3 informationField:(id)arg4 redundancyCode:(BOOL)arg5;	// IMP=0x0040000000006274
@property(readonly) BOOL sequence;
@property(readonly) _Bool moreData;
- (id)description;	// IMP=0x00100000000061b7
- (id)initWithData:(id)arg1;	// IMP=0x0010000000006183

@end
