//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface NTKDCompanionGalleryFacesCurator : NSObject
{
}

+ (id)complications;	// IMP=0x0020000000001bf8
+ (id)sharedInstance;	// IMP=0x00100000000019f8
- (id)_getVersionAppropriateFacesForStore:(id)arg1;	// IMP=0x0020000000002071
- (void)_addFacesToStore:(id)arg1;	// IMP=0x0010000000001ebb
- (void)_removeAllFacesFromStore:(id)arg1;	// IMP=0x0010000000001d63
- (id)_hunterDefaultFacesForStore:(id)arg1;	// IMP=0x0010000000001d51
- (id)_graceFDefaultFacesForStore:(id)arg1;	// IMP=0x0010000000001d3f
- (id)_graceEDefaultFacesForStore:(id)arg1;	// IMP=0x0010000000001d2d
- (id)_graceDefaultFacesForStore:(id)arg1;	// IMP=0x0010000000001d1b
- (id)_gloryFDefaultFacesForStore:(id)arg1;	// IMP=0x0010000000001d09
- (id)_gloryEDefaultFacesForStore:(id)arg1;	// IMP=0x0010000000001cf7
- (id)_gloryBDefaultFacesForStore:(id)arg1;	// IMP=0x0010000000001ce5
- (id)_gloryDefaultFacesForStore:(id)arg1;	// IMP=0x0010000000001cd3
- (id)_legacyDefaultFacesForStore:(id)arg1;	// IMP=0x0010000000001ccb
- (id)_collectionIdentifier;	// IMP=0x0010000000046614
- (void)curateCollectionStore:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001c00
- (id)init;	// IMP=0x0010000000001b4f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
