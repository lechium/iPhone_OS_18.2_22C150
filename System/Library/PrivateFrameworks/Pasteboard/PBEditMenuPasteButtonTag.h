//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PBPasteButtonTag.h"

__attribute__((visibility("hidden")))
@interface PBEditMenuPasteButtonTag : PBPasteButtonTag
{
    unsigned int _secureName;	// 8 = 0x8
    unsigned long long _displayMode;	// 16 = 0x10
    struct CGSize _size;	// 24 = 0x18
    struct CGPoint _contentOrigin;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000048fd
@property(readonly) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property(readonly) struct CGPoint contentOrigin; // @synthesize contentOrigin=_contentOrigin;
@property(readonly) struct CGSize size; // @synthesize size=_size;
@property(readonly) unsigned int secureName; // @synthesize secureName=_secureName;
- (id)_acceptCalloutBarPasteButtonTagVisit:(CDUnknownBlockType)arg1 systemInputAssistantPasteButtonTagVisit:(CDUnknownBlockType)arg2 undoInteractionHUDIconPasteButtonTagVisit:(CDUnknownBlockType)arg3 undoInteractionHUDTextPasteButtonTagVisit:(CDUnknownBlockType)arg4 contextMenuPasteButtonTagVisit:(CDUnknownBlockType)arg5 editMenuPasteButtonTagVisit:(CDUnknownBlockType)arg6;	// IMP=0x0000000000004905
- (unsigned int)secureNameForStyle:(id)arg1;	// IMP=0x00000000000048ed
- (id)resolvedStyleForStyle:(id)arg1;	// IMP=0x00000000000047a5
- (_Bool)isValid;	// IMP=0x000000000000460b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000004532
- (long long)initialSampleEventForStyle:(id)arg1;	// IMP=0x0000000000004527
- (unsigned long long)hash;	// IMP=0x0000000000004447
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000004357
- (float)backgroundStatisticsForegroundForStyle:(id)arg1;	// IMP=0x0000000000004322
- (CDStruct_8abe0896)backgroundStatisticsRegionForStyle:(id)arg1;	// IMP=0x00000000000042fb
- (unsigned long long)authenticationMessageContextForStyle:(id)arg1;	// IMP=0x00000000000042ca
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000041d1
- (id)initWithSecureName:(unsigned int)arg1 size:(struct CGSize)arg2 contentOrigin:(struct CGPoint)arg3 displayMode:(unsigned long long)arg4;	// IMP=0x000000000000412f

@end

