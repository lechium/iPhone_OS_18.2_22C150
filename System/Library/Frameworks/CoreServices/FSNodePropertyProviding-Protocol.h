//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreServices/NSObject-Protocol.h>

@class NSDictionary, NSString, NSURL;

@protocol FSNodePropertyProviding <NSObject>
@property(readonly, getter=isAVCHDCollection) _Bool AVCHDCollection;
@property(readonly, nonatomic, getter=isOnLocalVolume) _Bool onLocalVolume;
@property(readonly, nonatomic, getter=isOnDiskImage) _Bool onDiskImage;
@property(readonly, nonatomic, getter=isSecuredSystemContent) _Bool securedSystemContent;
@property(readonly, nonatomic, getter=isMountTrigger) _Bool mountTrigger;
@property(readonly, nonatomic, getter=isVolume) _Bool volume;
@property(readonly, nonatomic) _Bool hasHiddenExtension;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden;
@property(readonly, nonatomic, getter=isRegularFile) _Bool regularFile;
@property(readonly, nonatomic) _Bool hasPackageBit;
@property(readonly, nonatomic, getter=isSideFault) _Bool sideFault;
@property(readonly, nonatomic, getter=isAliasFile) _Bool aliasFile;
@property(readonly, nonatomic, getter=isSymbolicLink) _Bool symbolicLink;
@property(readonly, nonatomic, getter=isResolvable) _Bool resolvable;
@property(readonly, nonatomic, getter=isExecutable) _Bool executable;
@property(readonly, nonatomic, getter=isExecutableModeFile) _Bool executableModeFile;
@property(readonly, nonatomic, getter=isBusyDirectory) _Bool busyDirectory;
@property(readonly, nonatomic, getter=isDirectory) _Bool directory;
@property(readonly, nonatomic) _Bool canIssueIO;
- (NSDictionary *)sideFaultResourceValuesWithError:(id *)arg1;
- (_Bool)childNodeWithRelativePathExists:(NSString *)arg1;
- (_Bool)getOwnerUID:(unsigned int *)arg1 error:(id *)arg2;
- (_Bool)getFileIdentifier:(unsigned long long *)arg1 error:(id *)arg2;
- (_Bool)getInodeNumber:(unsigned long long *)arg1 error:(id *)arg2;
- (_Bool)getDeviceNumber:(int *)arg1 error:(id *)arg2;
- (_Bool)getHFSType:(unsigned int *)arg1 creator:(unsigned int *)arg2 error:(id *)arg3;
- (_Bool)getLength:(unsigned long long *)arg1 error:(id *)arg2;
- (_Bool)getContentModificationDate:(double *)arg1 error:(id *)arg2;
- (_Bool)getCreationDate:(double *)arg1 error:(id *)arg2;
- (_Bool)getVolumeIdentifier:(unsigned long long *)arg1 error:(id *)arg2;
- (NSString *)extensionWithError:(id *)arg1;
- (NSString *)nameWithError:(id *)arg1;
- (NSString *)canonicalPathWithError:(id *)arg1;
- (NSString *)pathWithError:(id *)arg1;
- (_Bool)getFileSystemRepresentation:(char [1024])arg1 error:(id *)arg2;
- (_Bool)getCachedResourceValueIfPresent:(id *)arg1 forKey:(NSString *)arg2 error:(id *)arg3;
- (_Bool)getResourceValue:(id *)arg1 forKey:(NSString *)arg2 options:(unsigned char)arg3 error:(id *)arg4;
- (NSURL *)URL;
@end

