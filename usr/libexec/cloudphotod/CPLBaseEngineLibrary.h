//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLPlatformObject.h>

@class NSString;

@interface CPLBaseEngineLibrary : CPLPlatformObject
{
}

- (void)getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0020000000196d15
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000196caf
- (id)componentName;	// IMP=0x0010000000196ca2
- (void)closeAndDeactivate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000196c92
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000196c18
- (_Bool)createLibraryWithError:(id *)arg1;	// IMP=0x0010000000196b68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
// Error: Property attributes should begin with the type ('T') attribute, property name: superclass
// Property attributes: (null)


@end
