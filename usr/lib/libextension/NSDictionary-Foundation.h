//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (Foundation)
+ (id)newWithContentsOf:(id)arg1 immutable:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0050000000759b27
+ (id)newWithContentsOf:(id)arg1 immutable:(_Bool)arg2;	// IMP=0x005000000075998a
+ (id)dictionaryWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x0050000000759956
+ (id)dictionaryWithContentsOfURL:(id)arg1;	// IMP=0x0050000000759927
+ (id)dictionaryWithContentsOfFile:(id)arg1;	// IMP=0x00500000007598f8
+ (_Bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;	// IMP=0x00500000007593c0
+ (_Bool)supportsSecureCoding;	// IMP=0x0050000000758c7e
- (id)__swift_objectForKeyedSubscript:(id)arg1;	// IMP=0x0010000000425690
- (id)__swiftInitWithDictionary_NSDictionary:(id)arg1;	// IMP=0x0010000000425cd0
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000759d43
- (id)initWithContentsOfURL:(id)arg1;	// IMP=0x0010000000759d0c
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x0010000000759cd5
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;	// IMP=0x00100000007597f5
- (_Bool)writeToURL:(id)arg1 atomically:(_Bool)arg2;	// IMP=0x00100000007596f2
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2;	// IMP=0x001000000075959b
- (id)_stringToWrite;	// IMP=0x0010000000759541
- (id)descriptionInStringsFileFormat;	// IMP=0x00100000007593c8
- (Class)classForCoder;	// IMP=0x00100000007593af
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000758c86
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000075871a
- (id)_web_objectForMIMEType:(id)arg1;	// IMP=0x0010000000759f84
- (id)_web_numberForKey:(id)arg1;	// IMP=0x0010000000759f54
- (id)_web_stringForKey:(id)arg1;	// IMP=0x0010000000759f24
- (int)_web_intForKey:(id)arg1;	// IMP=0x0010000000759ef9
- (id)fileGroupOwnerAccountID;	// IMP=0x001000000076cf16
- (id)fileOwnerAccountID;	// IMP=0x001000000076cefd
- (id)fileCreationDate;	// IMP=0x001000000076cee4
- (_Bool)fileIsAppendOnly;	// IMP=0x001000000076ceb2
- (_Bool)fileIsImmutable;	// IMP=0x001000000076ce80
- (unsigned int)fileHFSTypeCode;	// IMP=0x001000000076ce4e
- (unsigned int)fileHFSCreatorCode;	// IMP=0x001000000076ce1c
- (_Bool)fileExtensionHidden;	// IMP=0x001000000076cdea
- (unsigned long long)fileSystemFileNumber;	// IMP=0x001000000076cdb8
- (long long)fileSystemNumber;	// IMP=0x001000000076cd86
- (unsigned long long)fileGroupOwnerAccountNumber;	// IMP=0x001000000076cd7e
- (id)fileGroupOwnerAccountName;	// IMP=0x001000000076cd65
- (unsigned long long)fileOwnerAccountNumber;	// IMP=0x001000000076cd5d
- (id)fileOwnerAccountName;	// IMP=0x001000000076cd44
- (unsigned long long)filePosixPermissions;	// IMP=0x001000000076cd0f
- (id)fileType;	// IMP=0x001000000076ccf6
- (id)fileModificationDate;	// IMP=0x001000000076ccdd
- (unsigned long long)fileSize;	// IMP=0x001000000076ccab
- (id)valueForKeyPath:(id)arg1;	// IMP=0x00100000007a390b
- (id)valueForKey:(id)arg1;	// IMP=0x00100000007a3813
- (id)replacementObjectForPortCoder:(id)arg1;	// IMP=0x00100000008d345b
@end

