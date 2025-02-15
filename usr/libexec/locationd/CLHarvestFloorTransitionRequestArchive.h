//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet;

@interface CLHarvestFloorTransitionRequestArchive
{
    unsigned int _apHarvestCount;	// 8 = 0x8
    NSMutableSet *_macsNotInALSDatabase;	// 16 = 0x10
}

@property(retain, nonatomic) NSMutableSet *macsNotInALSDatabase; // @synthesize macsNotInALSDatabase=_macsNotInALSDatabase;
@property(nonatomic) unsigned int apHarvestCount; // @synthesize apHarvestCount=_apHarvestCount;
- (id)debugDescription;	// IMP=0x0010000000dd1872
- (id)description;	// IMP=0x0010000000dd1809
- (void)dealloc;	// IMP=0x0010000000dd17c7
- (id)initWithArchive:(id)arg1 index:(unsigned int)arg2 score:(float)arg3 apHarvestCount:(unsigned int)arg4 macsNotInALSDatabase:(id)arg5;	// IMP=0x0010000000dd173b

@end

