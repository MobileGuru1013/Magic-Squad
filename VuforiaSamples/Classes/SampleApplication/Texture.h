

#import <Foundation/Foundation.h>


@interface Texture : NSObject {
}


// --- Properties ---
@property (nonatomic, readonly) int width;
@property (nonatomic, readonly) int height;
@property (nonatomic, readonly) int channels;
@property (nonatomic, readwrite) int textureID;
@property (nonatomic, readonly) unsigned char* pngData;


// --- Public methods ---
- (id)initWithImageFile:(NSString*)filename;

@end
